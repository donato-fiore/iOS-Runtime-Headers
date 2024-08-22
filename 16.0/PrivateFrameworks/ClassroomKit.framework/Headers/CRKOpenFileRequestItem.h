// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKOPENFILEREQUESTITEM_H
#define CRKOPENFILEREQUESTITEM_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKOpenFileRequestItem : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *fileData; // ivar: _fileData
@property (copy, nonatomic) NSString *fileName; // ivar: _fileName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif