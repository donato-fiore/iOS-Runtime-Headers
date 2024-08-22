// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CATREMOTECONNECTIONSENDDATACONTEXT_H
#define _CATREMOTECONNECTIONSENDDATACONTEXT_H

@class NSData, NSString;
@protocol _CATRemoteConnectionSendContext;

#import <Foundation/Foundation.h>


@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext>

 {
    NSData *mEncodedData;
}


@property (nonatomic) NSUInteger bytesWritten; // ivar: _bytesWritten
@property (readonly, nonatomic) NSUInteger clientBytesWritten;
@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBytesRemaining;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(NSUInteger)headerLength;
-(id)bufferedDataWithError:(*id)arg0 ;
-(id)initWithData:(id)arg0 userInfo:(id)arg1 ;


@end


#endif