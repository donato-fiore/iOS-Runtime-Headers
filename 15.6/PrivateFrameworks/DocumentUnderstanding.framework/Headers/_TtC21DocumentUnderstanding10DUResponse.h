// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21DOCUMENTUNDERSTANDING10DURESPONSE_H
#define _TTC21DOCUMENTUNDERSTANDING10DURESPONSE_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding10DUResponse : NSObject <NSCoding, NSCopying>

 {
    ? typeToResults;
}


@property (nonatomic, readonly) BOOL isEmpty;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resultsFor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertWithResults:(id)arg0 contentType:(id)arg1 ;
-(void)removeAllResults;


@end


#endif