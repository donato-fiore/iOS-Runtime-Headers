// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCSESSIONFILETRANSFER_H
#define WCSESSIONFILETRANSFER_H

@class NSProgress, NSDate, NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WCSessionFile.h"

@interface WCSessionFileTransfer : NSObject <NSSecureCoding>



@property (readonly, nonatomic) WCSessionFile *file; // ivar: _file
@property (retain) NSProgress *internalProgress; // ivar: _internalProgress
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain) id *progressToken; // ivar: _progressToken
@property (retain, nonatomic) NSDate *transferDate; // ivar: _transferDate
@property (retain) NSError *transferError; // ivar: _transferError
@property (copy) NSString *transferIdentifier; // ivar: _transferIdentifier
@property (nonatomic, getter=isTransferring) BOOL transferring; // ivar: _transferring


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeProgress;


@end


#endif