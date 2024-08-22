// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESATOMRANGED_H
#define ESATOMRANGED_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ESAtomRanged : NSObject

@property (nonatomic) _NSRange editRange; // ivar: _editRange
@property (retain, nonatomic) NSString *replacementText; // ivar: _replacementText


+(id)atomWithEditRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEditScriptAtomRanged:(id)arg0 ;
-(id)description;
-(id)initWithEditRange:(struct _NSRange )arg0 replacementText:(id)arg1 ;


@end


#endif