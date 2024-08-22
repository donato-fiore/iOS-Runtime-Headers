// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYRECORD_H
#define TITYPOLOGYRECORD_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TITypologyRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *recordID; // ivar: _recordID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)recordClasses;
-(id)changedText;
-(id)currentKeyboardState;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(id)textSummary;
-(id)textSummaryForAutocorrection:(id)arg0 ;
-(void)applyToStatistic:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg0 ;


@end


#endif