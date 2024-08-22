// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMVOICEMAILTRANSCRIPT_H
#define VMVOICEMAILTRANSCRIPT_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMVoicemailTranscript : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUInteger confidenceRating; // ivar: _confidenceRating
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments
@property (readonly, copy, nonatomic) NSString *transcriptionString; // ivar: _transcriptionString


+(BOOL)supportsSecureCoding;
-(id)archivedData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTranscription:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif