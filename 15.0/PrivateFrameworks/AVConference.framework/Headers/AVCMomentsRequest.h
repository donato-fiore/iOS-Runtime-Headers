// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCMOMENTSREQUEST_H
#define AVCMOMENTSREQUEST_H

@class NSString;
@protocol AVCMomentsRequestDelegate;

#import <Foundation/Foundation.h>


@interface AVCMomentsRequest : NSObject

@property (nonatomic) NSObject<AVCMomentsRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) unsigned char mediaType; // ivar: _mediaType
@property (nonatomic) unsigned char mode; // ivar: _mode
@property (readonly, nonatomic) NSString *requesteeID; // ivar: _requesteeID
@property (readonly, nonatomic) NSString *requesterID; // ivar: _requesterID
@property (readonly, nonatomic) NSString *transactionID; // ivar: _transactionID


-(BOOL)endWithError:(*id)arg0 ;
-(BOOL)rejectWithError:(*id)arg0 ;
-(BOOL)startWithError:(*id)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)description;
-(id)initWithMediaType:(unsigned char)arg0 requesterID:(id)arg1 requesteeID:(id)arg2 ;
-(id)initWithMediaType:(unsigned char)arg0 requesterID:(id)arg1 requesteeID:(id)arg2 transactionID:(id)arg3 ;
-(void)dealloc;


@end


#endif