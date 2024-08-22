// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKREPORT_H
#define DKREPORT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DKReport : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *components; // ivar: _components


+(BOOL)supportsSecureCoding;
+(id)reportWithComponents:(id)arg0 ;
-(BOOL)isEmpty;
-(id)arrayForJSON;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponents:(id)arg0 ;
-(id)reportByMergingReport:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif