// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESOUNDPROTOTYPE_H
#define PHASESOUNDPROTOTYPE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"
#import "PHASESoundEventNodeAsset.h"

@interface PHASESoundPrototype : NSObject {
    PHASEEngine *_engine;
    PHASESoundEventNodeAsset *_programmaticAPIAsset;
}


@property (copy) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (retain) NSString *assetUID;
@property (readonly) NSArray *mixerInformation;


+(id)new;
-(id)init;
-(id)initWithEngine:(id)arg0 actionTreeRootNode:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 actionTreeRootNode:(id)arg1 outError:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 registeredActionTreeIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 registeredActionTreeUID:(id)arg1 outError:(*id)arg2 ;
-(void)deRegister;
-(void)dealloc;


@end


#endif