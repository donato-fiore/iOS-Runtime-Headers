// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWURLLOADERDATA_H
#define NWURLLOADERDATA_H

@class NSURL, NSString;
@protocol NWURLLoader, OS_dispatch_data, OS_nw_connection;

#import <Foundation/Foundation.h>


@interface NWURLLoaderData : NSObject <NWURLLoader>

 {
    NSURL *_URL;
    NSObject<OS_dispatch_data> *_data;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    NSUInteger _offset;
}


@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;


-(void)readDataOfMinimumIncompleteLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)readResponse:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateClient:(id)arg0 ;
-(void)writeData:(id)arg0 complete:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif