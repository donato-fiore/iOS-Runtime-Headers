// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDESCRIPTIONCOMPONENTREADER_H
#define TSPDESCRIPTIONCOMPONENTREADER_H



#import "TSPComponentReader.h"
#import "TSPDescriptionGenerator.h"

@interface TSPDescriptionComponentReader : TSPComponentReader {
    TSPDescriptionGenerator *_descriptionGenerator;
}




-(BOOL)shouldProceedParsingOnFailure;
-(BOOL)shouldValidateComponentsOfInMemoryObjects;
-(id)initWithComponent:(id)arg0 delegate:(id)arg1 readChannel:(id)arg2 descriptionGenerator:(id)arg3 ;
-(id)newUnarchiverWithObjectIdentifier:(NSInteger)arg0 messageInfo:(*void)arg1 unarchiveClass:(Class)arg2 message:(*void)arg3 messageVersion:(NSUInteger)arg4 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg5 unknownContent:(id)arg6 hasAlternateMessages:(BOOL)arg7 ;
-(id)unknownObjectUnarchiverWithArchiveInfo:(*void)arg0 stream:(struct DispatchDataInputStream *)arg1 ignoreMessageData:(BOOL)arg2 hasAlternateMessages:(BOOL)arg3 ;
-(void)read;


@end


#endif