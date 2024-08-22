// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMUPDATENOTEIFUSNMATCHESRESULT_H
#define EDAMUPDATENOTEIFUSNMATCHESRESULT_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMNote.h"

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject

@property (retain, nonatomic) EDAMNote *note; // ivar: _note
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated


+(id)structFields;
+(id)structName;


@end


#endif