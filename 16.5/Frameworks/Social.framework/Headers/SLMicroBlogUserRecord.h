// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLMICROBLOGUSERRECORD_H
#define SLMICROBLOGUSERRECORD_H

@class NSString, UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain) UIImage *profileImageCache; // ivar: _profileImageCache
@property (retain, nonatomic) NSString *profile_image_url; // ivar: _profile_image_url
@property (retain, nonatomic) NSString *screen_name; // ivar: _screen_name


+(BOOL)supportsSecureCoding;
+(id)userRecordWithDictionaryRepresentation:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValuesWithUserDictionary:(id)arg0 ;


@end


#endif