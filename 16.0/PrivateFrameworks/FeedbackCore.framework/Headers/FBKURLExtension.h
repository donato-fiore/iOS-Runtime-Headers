// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKURLEXTENSION_H
#define FBKURLEXTENSION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface FBKURLExtension : NSObject

@property (retain, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithExtensionIdentifier:(id)arg0 parameters:(id)arg1 ;


@end


#endif