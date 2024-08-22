// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSPRINGBOARDWEBCLIPMETADATA_H
#define WFSPRINGBOARDWEBCLIPMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSpringBoardWebClipMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL appIsInstalled; // ivar: _appIsInstalled
@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShortcutIdentifier:(id)arg0 applicationIdentifier:(id)arg1 appIsInstalled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif