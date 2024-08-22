// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MECOMPOSEEXTENSIONVALIDATIONERROR_H
#define MECOMPOSEEXTENSIONVALIDATIONERROR_H

@class NSError, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface MEComposeExtensionValidationError : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *extensionDisplayName; // ivar: _extensionDisplayName
@property (retain, nonatomic) UIImage *icon; // ivar: _icon


-(id)initWithExtensionName:(id)arg0 icon:(id)arg1 error:(id)arg2 ;


@end


#endif