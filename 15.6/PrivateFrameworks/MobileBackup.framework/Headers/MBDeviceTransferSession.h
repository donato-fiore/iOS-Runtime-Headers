// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBDEVICETRANSFERSESSION_H
#define MBDEVICETRANSFERSESSION_H

@class RPFileTransferSession;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBDeviceTransferSession : NSObject <NSSecureCoding>



@property (retain, nonatomic) RPFileTransferSession *fileTransferSession; // ivar: _fileTransferSession


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif