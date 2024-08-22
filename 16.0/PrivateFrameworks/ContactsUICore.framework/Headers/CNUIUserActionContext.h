// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIONCONTEXT_H
#define CNUIUSERACTIONCONTEXT_H

@class NSString, BSServiceConnectionEndpoint;
@protocol CNUIUserActionContext, CNUIUserActionCurator, CNUIUserActionRecorder, CNUIUserActionDialRequestOpener, CNUIUserActionURLOpener, CNUIUserActionUserActivityOpener;

#import <Foundation/Foundation.h>


@interface CNUIUserActionContext : NSObject <CNUIUserActionContext>



@property (retain, nonatomic) NSObject<CNUIUserActionCurator> *actionCurator; // ivar: _actionCurator
@property (retain, nonatomic) NSObject<CNUIUserActionRecorder> *actionRecorder; // ivar: _actionRecorder
@property (copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint; // ivar: _connectionEndpoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<CNUIUserActionDialRequestOpener> *dialRequestOpener; // ivar: _dialRequestOpener
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isOriginatingFromFavorites; // ivar: _isOriginatingFromFavorites
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CNUIUserActionURLOpener> *urlOpener; // ivar: _urlOpener
@property (retain, nonatomic) NSObject<CNUIUserActionUserActivityOpener> *userActivityOpener; // ivar: _userActivityOpener


+(id)contextWithExtensionContext:(id)arg0 ;
+(id)makeDefaultContext;
-(id)init;
-(id)initWithContactStore:(id)arg0 applicationWorkspace:(id)arg1 ;


@end


#endif