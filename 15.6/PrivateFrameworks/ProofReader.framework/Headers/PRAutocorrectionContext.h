// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRAUTOCORRECTIONCONTEXT_H
#define PRAUTOCORRECTIONCONTEXT_H


#import <Foundation/Foundation.h>


@interface PRAutocorrectionContext : NSObject {
    NSUInteger _modificationMask;
}




+(id)autocorrectionContextOfType:(NSUInteger)arg0 ;
+(void)clearCaches;
-(CGFloat)validSequenceCorrectionThreshold;
-(NSUInteger)modificationMask;
-(id)addedModifications;
-(id)completions;
-(id)correction;
-(id)currentModifications;
-(id)guesses;
-(id)prefixes;
-(id)removedModifications;
-(void)addInputCharacter:(unsigned short)arg0 geometryData:(id)arg1 ;
-(void)addInputCharacter:(unsigned short)arg0 geometryModel:(*void)arg1 geometryData:(id)arg2 ;
-(void)reset;
-(void)setModificationMask:(NSUInteger)arg0 ;
-(void)setValidSequenceCorrectionThreshold:(CGFloat)arg0 ;


@end


#endif