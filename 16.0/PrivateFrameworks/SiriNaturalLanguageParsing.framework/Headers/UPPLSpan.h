// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPPLSPAN_H
#define UPPLSPAN_H

@class NSString, NSNumber, USOSerializedGraph;


#import "UPSpan.h"

@interface UPPLSpan : UPSpan

@property (readonly) NSString *originalMention; // ivar: _originalMention
@property (readonly, copy) NSNumber *score; // ivar: _score
@property (retain) USOSerializedGraph *usoSerializedGraph; // ivar: _usoSerializedGraph


+(id)generateTypeWithPlumPrefix:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getTypeWithtoutPlumPrefix;
-(id)initWithRange:(struct _NSRange )arg0 originalMention:(id)arg1 category:(id)arg2 score:(id)arg3 usoSerializedGraph:(id)arg4 ;


@end


#endif