// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKDOWNLOAD_H
#define SKDOWNLOAD_H

@class NSNumber, NSString, NSURL, NSError;

#import <Foundation/Foundation.h>

#import "SKPaymentTransaction.h"

@interface SKDownload : NSObject {
    id *_internal;
}


@property (copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSInteger contentLength;
@property (readonly, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, nonatomic) NSInteger downloadState;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSInteger expectedContentLength;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) CGFloat timeRemaining;
@property (readonly, nonatomic) SKPaymentTransaction *transaction;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_applyChangeset:(id)arg0 ;
-(void)_setVersion:(id)arg0 ;


@end


#endif