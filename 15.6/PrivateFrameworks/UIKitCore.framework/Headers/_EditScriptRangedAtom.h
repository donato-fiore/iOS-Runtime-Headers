// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EDITSCRIPTRANGEDATOM_H
#define _EDITSCRIPTRANGEDATOM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _EditScriptRangedAtom : NSObject

@property (nonatomic) _NSRange editRange; // ivar: _editRange
@property (retain, nonatomic) NSString *replacementText; // ivar: _replacementText


+(id)atomWithEditRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(id)description;
-(id)initWithEditRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;


@end


#endif