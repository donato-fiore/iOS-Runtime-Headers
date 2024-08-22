// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSERVERSIDECONFIGPROTOCOL_H
#define MSSERVERSIDECONFIGPROTOCOL_H

@class NSURL, NSString;
@protocol MSServerSideConfigProtocolDelegate;

#import <Foundation/Foundation.h>


@interface MSServerSideConfigProtocol : NSObject {
    NSURL *_configURL;
    __MSSSCPCContext _context;
}


@property (nonatomic) NSObject<MSServerSideConfigProtocolDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *personID; // ivar: _personID


-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_didFailAuthenticationWithError:(id)arg0 ;
-(void)_didFinishWithResponse:(id)arg0 error:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)queryConfiguration;


@end


#endif