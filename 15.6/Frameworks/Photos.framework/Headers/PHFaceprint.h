// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHFACEPRINT_H
#define PHFACEPRINT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PHFaceprint : NSObject

@property (readonly, retain, nonatomic) NSData *faceprintData; // ivar: _faceprintData
@property (readonly, nonatomic) NSInteger faceprintVersion; // ivar: _faceprintVersion


-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithFaceprintData:(id)arg0 faceprintVersion:(NSInteger)arg1 ;


@end


#endif