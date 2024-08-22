// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREDOCUMENTATIONDATA_H
#define SUCOREDOCUMENTATIONDATA_H

@class NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUCoreDocumentationData : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (retain, nonatomic) NSData *license; // ivar: _license
@property (retain, nonatomic) NSData *readme; // ivar: _readme
@property (retain, nonatomic) NSData *readmeSummary; // ivar: _readmeSummary


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentationDataDictionary:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif