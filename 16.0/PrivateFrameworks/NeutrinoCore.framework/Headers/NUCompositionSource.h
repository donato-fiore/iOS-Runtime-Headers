// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCOMPOSITIONSOURCE_H
#define NUCOMPOSITIONSOURCE_H



#import "NUSource.h"
#import "NUCompositionSourceDefinition.h"
#import "NUComposition.h"

@interface NUCompositionSource : NUSource {
    NUCompositionSourceDefinition *_sourceDefinition;
}


@property (readonly, nonatomic) NUComposition *composition;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithComposition:(id)arg0 ;
-(id)sourceDefinition:(*id)arg0 ;


@end


#endif