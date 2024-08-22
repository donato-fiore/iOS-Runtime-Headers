// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INJSONDECODER_H
#define INJSONDECODER_H


#import <Foundation/Foundation.h>


@interface INJSONDecoder : NSObject



-(id)_decodeObjectOfClass:(Class)arg0 withCodableDescription:(id)arg1 from:(id)arg2 outCodableDescription:(*id)arg3 ;
-(id)_decodeWithCodableAttribute:(id)arg0 from:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg0 from:(id)arg1 ;
-(id)decodeObjectsOfClass:(Class)arg0 from:(id)arg1 ;
-(id)decodeWithCodableAttribute:(id)arg0 from:(id)arg1 ;
-(void)decodeObject:(id)arg0 withCodableDescription:(id)arg1 from:(id)arg2 ;


@end


#endif