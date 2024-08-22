// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNOPERATIONPOINTS_H
#define VNOPERATIONPOINTS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNOperationPoints : NSObject <NSCopying, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)errorForUnimplementedMethod:(SEL)arg0 ;
+(id)errorForUnknownClassificationIdentifier:(id)arg0 ;
+(id)loadFromURL:(id)arg0 error:(*id)arg1 ;
+(id)unspecifiedOperationPoints;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withPrecision:(float)arg2 error:(*id)arg3 ;
-(BOOL)getConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 withRecall:(float)arg2 error:(*id)arg3 ;
-(BOOL)getDefaultConfidence:(*float)arg0 forClassificationIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)getPrecision:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(BOOL)getRecall:(*float)arg0 forClassificationIdentifier:(id)arg1 confidence:(float)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif