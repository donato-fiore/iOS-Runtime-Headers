// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSCALENDAREVENTDATA_H
#define BCSCALENDAREVENTDATA_H

@class NSString;
@protocol BCSParsedDataPrivate;

#import <Foundation/Foundation.h>


@interface BCSCalendarEventData : NSObject <BCSParsedDataPrivate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *extraPreviewText;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *icsString; // ivar: _icsString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithICSString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif