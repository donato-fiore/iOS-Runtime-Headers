// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKCONNECTION_H
#define WKCONNECTION_H

@class NSString;
@protocol WKObject, WKConnectionDelegate;

#import <Foundation/Foundation.h>


@interface WKConnection : NSObject <WKObject>

 {
    WeakObjCPtr<id<WKConnectionDelegate>> _delegate;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WKConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)_connection;
-(void)dealloc;
-(void)sendMessageWithName:(id)arg0 body:(id)arg1 ;


@end


#endif