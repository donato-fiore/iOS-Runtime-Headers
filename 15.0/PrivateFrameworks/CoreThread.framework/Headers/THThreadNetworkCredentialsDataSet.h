// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THTHREADNETWORKCREDENTIALSDATASET_H
#define THTHREADNETWORKCREDENTIALSDATASET_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THThreadNetworkCredentialsDataSet : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *dataSetArray; // ivar: _dataSetArray
@property (copy, nonatomic) NSString *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataSetArray:(id)arg0 userInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif