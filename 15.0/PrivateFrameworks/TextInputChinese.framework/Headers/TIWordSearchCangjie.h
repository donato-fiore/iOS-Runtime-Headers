// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIWORDSEARCHCANGJIE_H
#define TIWORDSEARCHCANGJIE_H



#import "TIWordSearchShapeBased.h"

@interface TIWordSearchCangjie : TIWordSearchShapeBased

@property BOOL suchengEnabled; // ivar: _suchengEnabled
@property BOOL supportsEnglish; // ivar: _supportsEnglish


-(BOOL)validateCode:(id)arg0 withOption:(NSUInteger)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg0 ;
-(id)uncachedCandidatesForOperation:(id)arg0 ;
-(int)mecabraInputMethodType;


@end


#endif