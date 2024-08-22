// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTGLOBALVIDEOMETADATA_H
#define PTGLOBALVIDEOMETADATA_H


#import <Foundation/Foundation.h>


@interface PTGlobalVideoMetadata : NSObject {
    NSObject<PTSerializable>" _atoms;
}




+(id)deserializeMetadataWithType:(unsigned int)arg0 fromGlobalMetadata:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(unsigned int)_sizeOfAtomOfType:(unsigned int)arg0 withOptions:(id)arg1 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(void)setMetadata:(id)arg0 ofType:(unsigned int)arg1 ;


@end


#endif