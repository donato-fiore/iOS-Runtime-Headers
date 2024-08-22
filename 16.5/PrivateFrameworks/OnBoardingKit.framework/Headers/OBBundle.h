// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBBUNDLE_H
#define OBBUNDLE_H

@class NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface OBBundle : NSObject

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isLinkBundle; // ivar: _isLinkBundle
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSBundle *underlyingBundle;


+(id)bundleAtPath:(id)arg0 ;
+(id)bundleAtPath:(id)arg0 isLinkBundle:(BOOL)arg1 ;
+(id)bundleAtPath:(id)arg0 placeholderIdentifier:(id)arg1 ;
+(id)bundleWithIdentifier:(id)arg0 ;
+(id)identifierWithName:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithBundle:(id)arg0 isLinkBundle:(BOOL)arg1 ;
-(id)initWithBundle:(id)arg0 placeholderIdentifier:(id)arg1 ;
-(id)privacyFlow;


@end


#endif