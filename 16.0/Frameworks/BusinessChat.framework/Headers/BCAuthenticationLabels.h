// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCAUTHENTICATIONLABELS_H
#define BCAUTHENTICATIONLABELS_H

@class NSString, NSDictionary;
@protocol BCDictionarySerializable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding>

 {
    NSString *_title;
    NSString *_subtitle;
    NSString *_action;
}


@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 action:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif