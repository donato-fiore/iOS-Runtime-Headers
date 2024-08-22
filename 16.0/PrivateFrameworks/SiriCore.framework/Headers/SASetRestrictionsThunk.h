// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETRESTRICTIONSTHUNK_H
#define SASETRESTRICTIONSTHUNK_H

@class SASetRestrictions;



@interface SASetRestrictionsThunk : SASetRestrictions {
    id *_thunk;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithThunk:(id)arg0 ;
-(void)siriCore_invokeThunk;


@end


#endif