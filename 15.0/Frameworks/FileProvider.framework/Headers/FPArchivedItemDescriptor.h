// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPARCHIVEDITEMDESCRIPTOR_H
#define FPARCHIVEDITEMDESCRIPTOR_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPArchivedItemDescriptor : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (copy, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif