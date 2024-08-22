// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASTREAMVIDEOPREFERENCES_H
#define HMCAMERASTREAMVIDEOPREFERENCES_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSSet *resolutions; // ivar: _resolutions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResolutions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif