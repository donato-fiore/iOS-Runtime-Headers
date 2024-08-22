// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPKDEBUGCODES_H
#define DTKPKDEBUGCODES_H

@class XRIntKeyedDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface DTKPKDebugCodes : NSObject {
    XRIntKeyedDictionary *_codeMap;
}


@property (readonly, retain, nonatomic) NSSet *allKDebugCodes; // ivar: _allKDebugCodes


+(id)codesFromURL:(id)arg0 error:(*id)arg1 ;
+(id)localKDebugCodes:(*id)arg0 ;
+(void)initialize;
-(id)initWithCodes:(id)arg0 ;
-(id)kdebugCodeByValue:(unsigned int)arg0 ;
// -(id)kdebugCodeWithNameForCode:(unk)arg0  ;
-(id)kdebugCodeWithNameForValue:(unsigned int)arg0 ;


@end


#endif