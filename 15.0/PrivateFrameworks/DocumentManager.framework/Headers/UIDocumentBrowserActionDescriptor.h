// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDOCUMENTBROWSERACTIONDESCRIPTOR_H
#define UIDOCUMENTBROWSERACTIONDESCRIPTOR_H

@class NSString, NSPredicate;

#import <Foundation/Foundation.h>


@interface UIDocumentBrowserActionDescriptor : NSObject

@property (readonly, nonatomic) BOOL displayInline; // ivar: _displayInline
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *fileProviderIdentifier; // ivar: _fileProviderIdentifier
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSString *uiActionProviderIdentifier; // ivar: _uiActionProviderIdentifier


-(id)initWithIdentifier:(id)arg0 uiActionProviderIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2 displayName:(id)arg3 predicate:(id)arg4 displayInline:(BOOL)arg5 ;


@end


#endif