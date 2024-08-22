// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPEXTRACTIONSET_H
#define PPEXTRACTIONSET_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *namedEntityRecords; // ivar: _namedEntityRecords
@property (readonly, nonatomic) NSArray *topicRecords; // ivar: _topicRecords


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNamedEntityRecords:(id)arg0 topicRecords:(id)arg1 ;
-(id)merge:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif