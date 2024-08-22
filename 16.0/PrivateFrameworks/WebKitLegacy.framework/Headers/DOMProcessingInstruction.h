// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOMPROCESSINGINSTRUCTION_H
#define DOMPROCESSINGINSTRUCTION_H

@class NSString;


#import "DOMCharacterData.h"
#import "DOMStyleSheet.h"

@interface DOMProcessingInstruction : DOMCharacterData

@property (readonly) DOMStyleSheet *sheet;
@property (readonly, copy) NSString *target;




@end


#endif