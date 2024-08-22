// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCMESSAGEENTRY_H
#define TCMESSAGEENTRY_H

@class NSString, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface TCMessageEntry : NSObject {
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}


@property (copy, nonatomic) NSString *additionalText; // ivar: additionalText
@property (nonatomic) NSUInteger timeStamp; // ivar: m_timeStamp


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)timeStampCompare:(id)arg0 ;
-(NSUInteger)getParameterCount;
-(NSUInteger)hash;
-(id)affectedObjects;
-(id)description;
-(id)getAdditionalText;
-(id)getMessageText;
-(id)getParameter:(unsigned int)arg0 ;
-(id)initWithTag:(int)arg0 affectedObject:(id)arg1 text:(id)arg2 parameters:(char *)arg3 ;
-(int)getCount;
-(int)getMessageTag;
-(void)addAffectedObject:(id)arg0 ;
-(void)mergeEntries:(id)arg0 ;


@end


#endif