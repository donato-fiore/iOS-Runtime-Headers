// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCORESPOTLIGHTDISPATCHOBJECT_H
#define IMDCORESPOTLIGHTDISPATCHOBJECT_H

@class CRRecentContactsLibrary;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightDispatchObject : NSObject

@property (nonatomic) BOOL allowsOverrideOfObjects; // ivar: _allowsOverrideOfObjects
@property (nonatomic) CRRecentContactsLibrary *recentsInstance; // ivar: _recentsInstance
@property (nonatomic) BOOL shouldAddToCoreRecents; // ivar: _shouldAddToCoreRecents
@property (nonatomic) BOOL shouldAddToSpotlight; // ivar: _shouldAddToSpotlight
@property (nonatomic) BOOL shouldAddToSuggestions; // ivar: _shouldAddToSuggestions


+(id)sharedInstance;
-(id)init;
-(void)dealloc;


@end


#endif