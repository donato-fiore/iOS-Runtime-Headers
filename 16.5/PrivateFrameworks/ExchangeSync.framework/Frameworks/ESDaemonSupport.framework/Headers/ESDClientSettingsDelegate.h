// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESDCLIENTSETTINGSDELEGATE_H
#define ESDCLIENTSETTINGSDELEGATE_H

@class DAOofParams;
@protocol ESSettingsResponseDelegate;


#import "ESDClientDelegate.h"

@interface ESDClientSettingsDelegate : ESDClientDelegate <ESSettingsResponseDelegate>



@property (nonatomic) BOOL isUpdate; // ivar: _isUpdate
@property (retain, nonatomic) DAOofParams *requestParams; // ivar: _requestParams
@property (retain, nonatomic) DAOofParams *responseParams; // ivar: _responseParams


-(BOOL)isOofSupported;
-(id)initWithAccountID:(id)arg0 requestDictionary:(id)arg1 forUpdate:(BOOL)arg2 client:(id)arg3 ;
-(void)beginSettingsRequest;
-(void)dealloc;
-(void)disable;
-(void)finishWithError:(id)arg0 ;
-(void)settingsRequestFinishedWithResults:(id)arg0 status:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif