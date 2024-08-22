// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSMARTCARDTOKENSESSION_H
#define TKSMARTCARDTOKENSESSION_H



#import "TKTokenSession.h"
#import "TKSmartCard.h"

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard *_smartCard;
    BOOL _hasSession;
    TKSmartCard *_errorCard;
}


@property (readonly) TKSmartCard *smartCard;


-(id)initWithToken:(id)arg0 ;
-(id)name;
-(void)beginRequest;
-(void)endRequest;


@end


#endif