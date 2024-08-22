// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDICONCLIENT_H
#define _LSDICONCLIENT_H

@class LSDClient;
@protocol _LSDIconServiceProtocol;



@interface _LSDIconClient : LSDClient <_LSDIconServiceProtocol>





-(void)getAlternateIconNameForIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)setAlternateIconName:(id)arg0 forIdentifier:(id)arg1 iconsDictionary:(id)arg2 reply:(id)arg3 ;


@end


#endif