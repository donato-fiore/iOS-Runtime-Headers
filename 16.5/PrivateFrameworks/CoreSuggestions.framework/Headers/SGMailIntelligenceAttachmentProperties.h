// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMAILINTELLIGENCEATTACHMENTPROPERTIES_H
#define SGMAILINTELLIGENCEATTACHMENTPROPERTIES_H

@class NSArray, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailIntelligenceAttachmentProperties : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *authors; // ivar: _authors
@property (readonly, nonatomic) NSString *fileDescription; // ivar: _fileDescription
@property (readonly, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSNumber *fileSizeInBytes; // ivar: _fileSizeInBytes
@property (readonly, nonatomic) NSArray *keywords; // ivar: _keywords


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 fileSizeInBytes:(id)arg1 fileDescription:(id)arg2 keywords:(id)arg3 authors:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif