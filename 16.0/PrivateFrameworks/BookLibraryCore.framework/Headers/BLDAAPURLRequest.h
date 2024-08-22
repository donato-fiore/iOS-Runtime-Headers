// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLDAAPURLREQUEST_H
#define BLDAAPURLREQUEST_H

@class BUBag, NSNumber, NSData, NSString;

#import <Foundation/Foundation.h>


@interface BLDAAPURLRequest : NSObject {
    BUBag *_bag;
}


@property (retain, nonatomic) NSNumber *DSID; // ivar: _DSID
@property (retain, nonatomic) NSData *body; // ivar: _body
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *daapURL; // ivar: _daapURL
@property (nonatomic) NSInteger dataEncoding; // ivar: _dataEncoding
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) NSInteger requestMethod; // ivar: _requestMethod


-(id)createDaapURL:(id)arg0 ;
-(id)description;
-(id)initWithDSID:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_URLWithCompletionHandler:(id)arg0 ;
-(void)_URLWithRetry:(BOOL)arg0 completion:(id)arg1 ;
-(void)_requestWithCompletionHandler:(id)arg0 ;
-(void)_serverParametersWithCompletionHandler:(id)arg0 ;
-(void)_valueForDAAPBagKey:(id)arg0 completion:(id)arg1 ;
-(void)executeWithCompletionHandler:(id)arg0 ;


@end


#endif