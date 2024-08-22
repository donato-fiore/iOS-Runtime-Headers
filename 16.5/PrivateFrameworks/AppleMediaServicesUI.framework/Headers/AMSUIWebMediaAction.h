// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBMEDIAACTION_H
#define AMSUIWEBMEDIAACTION_H

@class NSArray, NSString;
@protocol AMSUIWebActionRunnable;


#import "AMSUIWebAction.h"
#import "AMSUIWebClientContext.h"

@interface AMSUIWebMediaAction : AMSUIWebAction <AMSUIWebActionRunnable>



@property (retain, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *includedResultKeys; // ivar: _includedResultKeys
@property (retain, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString


-(id)_runMediaRequestWithType:(NSInteger)arg0 clientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
-(id)_runMediaRequestWithURL:(id)arg0 clientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
-(id)initWithJSObject:(id)arg0 context:(id)arg1 ;
-(id)runAction;


@end


#endif