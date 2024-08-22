// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPFILETRANSFERPROGRESS_H
#define RPFILETRANSFERPROGRESS_H

@class NSString, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RPFileTransferProgress : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat bytesPerSecond; // ivar: _bytesPerSecond
@property (nonatomic) CGFloat compressionRate; // ivar: _compressionRate
@property (copy, nonatomic) NSString *currentFilename; // ivar: _currentFilename
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) int linkType; // ivar: _linkType
@property (nonatomic) CGFloat remainingSeconds; // ivar: _remainingSeconds
@property (nonatomic) NSInteger totalByteCount; // ivar: _totalByteCount
@property (nonatomic) NSInteger totalFileCount; // ivar: _totalFileCount
@property (nonatomic) NSInteger transferredByteCount; // ivar: _transferredByteCount
@property (nonatomic) NSInteger transferredFileCount; // ivar: _transferredFileCount
@property (nonatomic) int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif