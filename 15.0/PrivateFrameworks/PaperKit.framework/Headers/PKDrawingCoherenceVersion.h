// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAWINGCOHERENCEVERSION_H
#define PKDRAWINGCOHERENCEVERSION_H

@protocol PKDrawingVersion;

#import <Foundation/Foundation.h>


@interface PKDrawingCoherenceVersion : NSObject <PKDrawingVersion>

 {
    ? version;
    ? context;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif