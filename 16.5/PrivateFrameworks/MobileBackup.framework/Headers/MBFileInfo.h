// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBFILEINFO_H
#define MBFILEINFO_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBFileInfo : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *extendedAttributes; // ivar: _extendedAttributes
@property (nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSInteger priority; // ivar: _priority


+(BOOL)supportsSecureCoding;
+(id)fileInfoWithPath:(id)arg0 extendedAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 extendedAttributes:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif