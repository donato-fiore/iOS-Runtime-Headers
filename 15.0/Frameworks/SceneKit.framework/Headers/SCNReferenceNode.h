// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNREFERENCENODE_H
#define SCNREFERENCENODE_H

@class NSURL, NSMutableDictionary;


#import "SCNNode.h"

@interface SCNReferenceNode : SCNNode {
    NSURL *_referenceURL;
    BOOL _loaded;
    NSMutableDictionary *_overrides;
    NSURL *_catalogURL;
    NSURL *_sourceDocumentURL;
}


@property (readonly, getter=isLoaded) BOOL loaded;
@property (nonatomic) NSInteger loadingPolicy; // ivar: _loadingPolicy
@property (copy, nonatomic) NSURL *referenceURL;


+(BOOL)supportsSecureCoding;
+(id)referenceNodeWithURL:(id)arg0 ;
-(BOOL)_isAReference;
-(BOOL)_isNameUnique:(id)arg0 ;
-(id)_catalog;
-(id)_loadReferencedSceneWithURL:(id)arg0 catalog:(id)arg1 ;
-(id)_resolveURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)overrides;
-(void)_applyOverride:(id)arg0 forKeyPath:(id)arg1 ;
-(void)_applyOverrides;
-(void)_applyUnsharing:(id)arg0 alreadyShared:(id)arg1 ;
-(void)_diffNode:(id)arg0 with:(id)arg1 path:(id)arg2 ;
-(void)_diffObject:(id)arg0 with:(id)arg1 path:(id)arg2 ;
-(void)_loadWithCatalog:(id)arg0 ;
-(void)_loadWithURL:(id)arg0 ;
-(void)_loadWithURL:(id)arg0 catalog:(id)arg1 ;
-(void)addOverride:(id)arg0 forKeyPath:(id)arg1 ;
-(void)collectOverrides;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)load;
-(void)removeAllOverrides;
-(void)removeForKeyPath:(id)arg0 ;
-(void)setOverride:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setOverrides:(id)arg0 ;
-(void)unload;


@end


#endif